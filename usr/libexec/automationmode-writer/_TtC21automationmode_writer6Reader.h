//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21automationmode_writer6Reader : NSObject
{
    MISSING_TYPE *stateFilePath;	// 8 = 0x8
    MISSING_TYPE *noAuthRequiredFilePath;	// 24 = 0x18
    MISSING_TYPE *bootSessionUUID;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000001450
- (id)init;	// IMP=0x00100000000015a0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001530
- (void)requestAutomationModeRequiresAuthenticationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000014b0
- (void)requestAutomationModeEnabledStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001490
- (void)dealloc;	// IMP=0x0010000000001340

@end

