//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASOHostContext : NSExtensionContext
{
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000001f47
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000001edb
- (void)dismissOverlayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000021d8
- (void)presentOverlayWithConfiguration:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000213b
- (id)serviceContext;	// IMP=0x00000000000020eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

