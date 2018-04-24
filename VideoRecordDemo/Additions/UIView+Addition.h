#import <UIKit/UIKit.h>

@interface UIView (Addition)

@property(nonatomic) CGFloat left;

@property(nonatomic) CGFloat top;

@property(nonatomic) CGFloat right;

@property(nonatomic) CGFloat bottom;

@property(nonatomic) CGFloat width;

@property(nonatomic) CGFloat height;

@property(nonatomic) CGFloat centerX;

@property(nonatomic) CGFloat centerY;

@property(nonatomic, readonly) CGFloat ttScreenX;

@property(nonatomic, readonly) CGFloat ttScreenY;

@property(nonatomic, readonly) CGFloat screenViewX;

@property(nonatomic, readonly) CGFloat screenViewY;

@property(nonatomic, readonly) CGRect screenFrame;

@property(nonatomic) CGPoint origin;

@property(nonatomic) CGSize size;

- (UIView *)descendantOrSelfWithClass:(Class)cls;

- (UIView *)ancestorOrSelfWithClass:(Class)cls;

- (void)removeAllSubviews;

- (CGPoint)offsetFromView:(UIView *)otherView;

@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;

@end
