#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ABKUIUtils : NSObject

/*!
 * The currently active UIWindowScene
 */
@property (class, nonatomic, readonly) UIWindowScene *activeWindowScene API_AVAILABLE(ios(13.0));

/*!
 * The currently active application UIWindow
 */
@property (class, nonatomic, readonly) UIWindow *activeApplicationWindow;

/*!
 * The currently active application UIViewController
 */
@property (class, nonatomic, readonly) UIViewController *activeApplicationViewController;

+ (NSString *)getLocalizedString:(NSString *)key inAppboyBundle:(NSBundle *)appboyBundle table:(NSString *)table;
+ (BOOL)objectIsValidAndNotEmpty:(id)object;
+ (Class)getSDWebImageProxyClass;
+ (Class)getModalFeedViewControllerClass;
+ (BOOL)isNotchedPhone;
+ (UIImage *)getImageWithName:(NSString *)name
                         type:(NSString *)type
               inAppboyBundle:(NSBundle *)appboyBundle;
+ (UIInterfaceOrientation)getInterfaceOrientation;
+ (CGSize)getStatusBarSize;
+ (UIColor *)dynamicColorForLightColor:(UIColor *)lightColor
                             darkColor:(UIColor *)darkColor;
+ (BOOL)string:(NSString *)string1 isEqualToString:(NSString *)string2;

@end
