//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, NSOperation, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryConnectOperation : TVHKAsynchronousOperation
{
    TVHKMediaLibrarySessionState *_sessionState;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 24 = 0x18
    TVHKMediaLibraryRequestSession *_requestSession;	// 32 = 0x20
    NSOperation *_currentSubOperation;	// 40 = 0x28
    TVHKMediaLibrarySessionState *_sessionStateInternal;	// 48 = 0x30
}

+ (id)new;	// IMP=0x006000000004b0ea
- (void).cxx_destruct;	// IMP=0x000000000004d3b7
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionStateInternal; // @synthesize sessionStateInternal=_sessionStateInternal;
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(retain, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void)_finishConnectAttemptWithSuccess:(_Bool)arg1;	// IMP=0x000000000004d26c
- (void)_startSubOperation:(id)arg1;	// IMP=0x000000000004d21a
- (void)_startDPAPRevisionOperation;	// IMP=0x000000000004cf76
- (void)_startDPAPBasePlaylistOperation;	// IMP=0x000000000004cd00
- (void)_startDPAPDatabasesOperation;	// IMP=0x000000000004ca58
- (void)_startDAAPRevisionOperation;	// IMP=0x000000000004c75a
- (void)_startDAAPBasePlaylistOperation;	// IMP=0x000000000004c4a5
- (void)_startDAAPDatabasesOperation;	// IMP=0x000000000004c1b0
- (void)_startMachineVerifyOperation;	// IMP=0x000000000004bf28
- (void)_startHomeShareVerifyOperation;	// IMP=0x000000000004bc8f
- (void)_startFairPlaySAPSetupOperation;	// IMP=0x000000000004b990
- (void)_startLoginOperation;	// IMP=0x000000000004b6fc
- (void)_startServerInfoOperation;	// IMP=0x000000000004b33d
- (void)cancel;	// IMP=0x000000000004b2bf
- (void)executionDidBegin;	// IMP=0x000000000004b2ad
- (id)initWithMediaServerIdentifier:(id)arg1 accessMode:(unsigned long long)arg2 homeSharingGroupIdentifier:(id)arg3 requestSession:(id)arg4;	// IMP=0x000000000004b188
- (id)init;	// IMP=0x000000000004b119

@end

