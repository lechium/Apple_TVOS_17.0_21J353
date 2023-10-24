//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIActionAlertActionItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    UIImage *_titleImage;	// 16 = 0x10
    VUIAction *_action;	// 24 = 0x18
    NSDictionary *_metrics;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000fcb8a
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) VUIAction *action; // @synthesize action=_action;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 titleImage:(id)arg2 action:(id)arg3 metrics:(id)arg4;	// IMP=0x00000000000fca36

@end

