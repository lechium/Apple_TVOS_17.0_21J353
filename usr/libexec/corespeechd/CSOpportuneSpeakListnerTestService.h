//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSOpportuneSpeakListener, NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    CSOpportuneSpeakListener *listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000039892
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectedly:(_Bool)arg2;	// IMP=0x00100000000397fd
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;	// IMP=0x0010000000039768
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;	// IMP=0x00100000000396d3
- (void)receiveOpportuneSpeakListenerStop;	// IMP=0x00100000000396b6
- (void)receiveOpportuneSpeakListenerStart;	// IMP=0x0010000000039627
- (void)start;	// IMP=0x001000000003958a
- (id)init;	// IMP=0x0010000000039532

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

