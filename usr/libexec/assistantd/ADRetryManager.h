//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SABaseCommand, SARestartRequest;
@protocol SAServerBoundCommand;

@interface ADRetryManager : NSObject
{
    int _retryCount;	// 8 = 0x8
    SARestartRequest *_restartRequest;	// 16 = 0x10
    NSMutableArray *_requestObjects;	// 24 = 0x18
    _Bool _needsToRetryNakedObjects;	// 32 = 0x20
    NSMutableArray *_nakedObjects;	// 40 = 0x28
    SABaseCommand<SAServerBoundCommand> *_originalRequest;	// 48 = 0x30
    NSString *_latestMappedRequestId;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000002a9735
@property(copy, nonatomic) NSString *latestMappedRequestId; // @synthesize latestMappedRequestId=_latestMappedRequestId;
- (void)clearNakedObjects;	// IMP=0x00100000002a9708
- (id)nakedObjectsToRetry;	// IMP=0x00100000002a96f0
- (void)setNeedsToRetryNakedObjects;	// IMP=0x00100000002a96e6
- (id)retryRequestId;	// IMP=0x00100000002a966b
- (id)originalRequestId;	// IMP=0x00100000002a9655
- (_Bool)commandRefsRestartCommand:(id)arg1;	// IMP=0x00100000002a95bf
- (id)objectsToRetry;	// IMP=0x00100000002a9255
- (void)_objectsToRemapFromRefId:(id)arg1 toRefId:(id)arg2 retryFullRequest:(_Bool)arg3 commandsToRetry:(id)arg4;	// IMP=0x00100000002a8efa
- (_Bool)_canRestartRequest;	// IMP=0x00100000002a8ec3
- (void)setLastReceivedCommand:(id)arg1;	// IMP=0x00100000002a8e0a
- (void)endRetryableRequestForCommandAceId:(id)arg1 refId:(id)arg2;	// IMP=0x00100000002a8c99
- (void)endRetryableRequestForCommand:(id)arg1;	// IMP=0x00100000002a8bb1
- (_Bool)shouldRetryOnConnectionFailure;	// IMP=0x00100000002a8ba4
- (void)appendSessionObjectToRequest:(id)arg1;	// IMP=0x00100000002a8b2d
- (void)beginRetryableRequest:(id)arg1;	// IMP=0x00100000002a88ed
- (_Bool)_commandRefsOrIsCurrentRequest:(id)arg1;	// IMP=0x00100000002a881c
- (void)_clearRequestCommands;	// IMP=0x00100000002a87dc

@end
