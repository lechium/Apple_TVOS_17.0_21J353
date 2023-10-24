//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDDataStreamBulkSendProtocol, NSDictionary, NSError, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDDataStreamBulkSendSessionCandidate : NSObject
{
    NSDictionary *_metadata;	// 8 = 0x8
    HMDDataStreamBulkSendProtocol *_bulkSendProtocol;	// 16 = 0x10
    NSDictionary *_requestHeader;	// 24 = 0x18
    NSMutableArray *_pendingReads;	// 32 = 0x20
    NSError *_receivedFailure;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000b0b166
@property(retain, nonatomic) NSError *receivedFailure; // @synthesize receivedFailure=_receivedFailure;
@property(retain, nonatomic) NSMutableArray *pendingReads; // @synthesize pendingReads=_pendingReads;
@property(readonly, nonatomic) NSDictionary *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(readonly, nonatomic) __weak HMDDataStreamBulkSendProtocol *bulkSendProtocol; // @synthesize bulkSendProtocol=_bulkSendProtocol;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void)rejectBulkSendSessionWithStatus:(unsigned short)arg1;	// IMP=0x0000000000b0b0b7
- (void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b0b029
- (id)initWithProtocol:(id)arg1 requestHeader:(id)arg2 metadata:(id)arg3;	// IMP=0x0000000000b0af49

@end

