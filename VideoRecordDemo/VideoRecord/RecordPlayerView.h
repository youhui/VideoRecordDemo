#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "UIView+Addition.h"

typedef void(^JCRecordPlayerViewCancelBlock)(void);
typedef void(^JCRecordPlayerViewConfirmBlock)(void);

@interface RecordPlayerView : UIView

@property (nonatomic, copy) JCRecordPlayerViewCancelBlock cancelBlock;
@property (nonatomic, copy) JCRecordPlayerViewConfirmBlock confirmBlock;
@property (nonatomic, strong) NSURL *playUrl;

@end
