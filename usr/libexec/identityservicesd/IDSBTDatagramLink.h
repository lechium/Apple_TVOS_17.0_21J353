//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDSLinkDelegate;

@interface IDSBTDatagramLink : NSObject
{
    NSString *_cbuuid;	// 8 = 0x8
    NSString *_deviceUniqueID;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    unsigned long long _totalBytesSent;	// 32 = 0x20
    unsigned long long _totalPacketsSent;	// 40 = 0x28
    unsigned long long _totalBytesReceived;	// 48 = 0x30
    unsigned long long _totalPacketsReceived;	// 56 = 0x38
    unsigned long long _previousBytesSent;	// 64 = 0x40
    unsigned long long _previousPacketsSent;	// 72 = 0x48
    unsigned long long _previousBytesReceived;	// 80 = 0x50
    unsigned long long _previousPacketsReceived;	// 88 = 0x58
    double _previousReportTime;	// 96 = 0x60
    id <IDSLinkDelegate> _delegate;	// 104 = 0x68
    id <IDSLinkDelegate> _alternateDelegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000096e9
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
- (id);	// IMP=0x0010000000009678
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)copyLinkStatsDict;	// IMP=0x0010000000009530
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x00100000000092b9
- (void)_processIncomingPacket;	// IMP=0x00100000000092b3
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000000092a8
- (unsigned long long)sendPacketBuffer:(CDStruct_a8d8a807 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000000092a0
- (void)start;	// IMP=0x001000000000929a
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)invalidate;	// IMP=0x001000000000927a
- (void)dealloc;	// IMP=0x001000000000923c
- (id)initWithPipe:(id)arg1 withDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x0010000000009233

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

