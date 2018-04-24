#import <Foundation/Foundation.h>
#import "VideoRecordManager.h"

typedef void(^VideoRecordViewDismissBlock)(void);
typedef void(^VideoRecordViewCompletionBlock)(NSURL *fileUrl);

@interface VideoRecordView : UIWindow

@property (nonatomic, copy) VideoRecordViewDismissBlock cancelBlock;
@property (nonatomic, copy) VideoRecordViewCompletionBlock completionBlock;

- (void)present;

@end
