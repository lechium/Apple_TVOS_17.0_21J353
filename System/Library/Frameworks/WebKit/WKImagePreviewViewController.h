//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface WKImagePreviewViewController : UIViewController
{
    RetainPtr_f649c0c3 _imageActions;	// 8 = 0x8
    RetainPtr_5a40b48a _activatedElementInfo;	// 16 = 0x10
    RetainPtr_c27edd19 _image;	// 24 = 0x18
    struct RetainPtr<UIImageView> _imageView;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000001ec400
- (void).cxx_destruct;	// IMP=0x00000000001ec37a
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001ec2e4
- (id)initWithCGImage:(RetainPtr_c27edd19)arg1 defaultActions:(RetainPtr_f649c0c3)arg2 elementInfo:(RetainPtr_5a40b48a)arg3;	// IMP=0x00000000001ebf3e
- (void)loadView;	// IMP=0x00000000001ebea5

@end

