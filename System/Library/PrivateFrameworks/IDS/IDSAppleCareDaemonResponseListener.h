//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject
{
    IDSDaemonRequestTimer *_requestTimer;	// 8 = 0x8
    CDUnknownBlockType _disconnectedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004232d
- (void)daemonDisconnected;	// IMP=0x000000000004231a
- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000421de
- (id)initWithDisconnectedBlockAndNoTimeout:(CDUnknownBlockType)arg1;	// IMP=0x000000000004216b
- (id)initWithRequestTimer:(id)arg1;	// IMP=0x0000000000042100

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

