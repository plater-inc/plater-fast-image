require 'json'

Pod::Spec.new do |s|
  package = JSON.parse(File.read(File.join(__dir__, 'package.json')))

  s.name          = "PlaterFastImage"
  s.version       = package['version']
  s.summary       = package['description']
  s.authors       = { "Orr Bibring" => "orr@plater.com" }
  s.homepage      = "https://github.com/plater-inc/plater-fast-image"
  s.license       = "MIT"
  s.platforms     = { :ios => "13.0", :tvos => "9.0" }
  s.framework     = 'UIKit'
  s.requires_arc  = true
  s.source        = { :git => "https://github.com/plater-inc/plater-fast-image.git", :tag => "v#{s.version}" }
  s.source_files  = "ios/**/*.{h,m}"

  s.dependency 'React-Core'
  # ! +---------+
  # ! | Warning |
  # ! +---------+
  # ! The versions below are taken from ExpoImage's podspec.
  # ! If different versions are used, then ExpoImage can not
  # ! be installed at the same time as this package.
  s.dependency 'SDWebImage', '~> 5.15.8'
  s.dependency 'SDWebImageWebPCoder', '~> 0.11.0'
  s.dependency 'SDWebImageAVIFCoder', '~> 0.10.0'
  s.dependency 'SDWebImageSVGCoder', '~> 1.7.0'

end