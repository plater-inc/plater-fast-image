#import <UIKit/UIKit.h>

#import <SDWebImage/SDAnimatedImageView+WebCache.h>
#import <SDWebImage/SDWebImageDownloader.h>

#import <React/RCTComponent.h>
#import <React/RCTResizeMode.h>

#import "FFFastImageSource.h"

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

@interface FFFastImageView : SDAnimatedImageView

@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoadStart;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageProgress;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageError;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoad;
@property (nonatomic, copy) RCTDirectEventBlock onFastImageLoadEnd;
@property (nonatomic, assign) RCTResizeMode resizeMode;
@property (nonatomic, strong) FFFastImageSource *source;
@property (nonatomic, strong) UIImage *defaultSource;
@property (nonatomic, strong) UIColor *imageColor;

@end
