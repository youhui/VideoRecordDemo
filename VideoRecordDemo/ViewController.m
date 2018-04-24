#import "ViewController.h"
#import "VideoRecordView.h"
#import "UIView+Addition.h"

@interface ViewController ()

@property (nonatomic, strong) VideoRecordView *recordView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *recordBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    recordBtn.backgroundColor = UIColor.blackColor;
    [self.view addSubview:recordBtn];
    [recordBtn setTitle:@"录制" forState:UIControlStateNormal];
    recordBtn.frame = CGRectMake(100, 100, 150, 40);
    [recordBtn.titleLabel setFont:[UIFont systemFontOfSize:20]];
    [recordBtn addTarget:self action:@selector(presentVideoRecordView) forControlEvents:UIControlEventTouchUpInside];
    
    UIButton *removeBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    removeBtn.backgroundColor = UIColor.blackColor;
    [self.view addSubview:removeBtn];
    [removeBtn setTitle:@"移除RecordView" forState:UIControlStateNormal];
    removeBtn.frame = CGRectMake(100, 150, 150, 40);
    [removeBtn.titleLabel setFont:[UIFont systemFontOfSize:20]];
    [removeBtn addTarget:self action:@selector(removeVideoRecordView) forControlEvents:UIControlEventTouchUpInside];
}

- (void)presentVideoRecordView {
    if (!_recordView) {
        _recordView = [[VideoRecordView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        _recordView.cancelBlock = ^{
            
        };
        _recordView.completionBlock = ^(NSURL *fileUrl) {
            
        };
    }
    [_recordView present];
}

- (void)removeVideoRecordView {
    if (_recordView) {
        [_recordView removeFromSuperview];
        _recordView = nil;
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
