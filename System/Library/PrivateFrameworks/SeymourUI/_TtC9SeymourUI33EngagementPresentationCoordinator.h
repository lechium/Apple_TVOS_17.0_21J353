//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33EngagementPresentationCoordinator : NSObject
{
    MISSING_TYPE *engagementClient;	// 8 = 0x8
    MISSING_TYPE *eventHub;	// 48 = 0x30
    MISSING_TYPE *messageCoordinator;	// 64 = 0x40
    MISSING_TYPE *subscriptionToken;	// 104 = 0x68
    MISSING_TYPE *engagementBannerRuleInfo;	// 251697674 = 0xf009a0a
    MISSING_TYPE *modalContextProvider;	// 336592895 = 0x140fffff
    MISSING_TYPE *isActive;	// 1880093377 = 0x700ff2c1
}

- (void).cxx_destruct;	// IMP=0x0000000000995690
- (id)init;	// IMP=0x0000000000995630
- (id)viewControllerForModalPresentation;	// IMP=0x00000000008f8c90
- (id)contextPropertyWithName:(id)arg1;	// IMP=0x00000000008f8ab0
@property(nonatomic, readonly) _Bool allowsModalMessageDisplay;

@end

