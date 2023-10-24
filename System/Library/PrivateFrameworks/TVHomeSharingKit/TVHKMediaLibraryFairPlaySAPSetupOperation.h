//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, TVHKAsynchronousWorkToken, TVHKFairPlaySAPContext, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryFairPlaySAPSetupOperation : TVHKAsynchronousOperation
{
    TVHKFairPlaySAPContext *_fairPlaySAPContext;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKMediaLibrarySessionState *_sessionState;	// 24 = 0x18
    TVHKMediaLibraryRequestSession *_requestSession;	// 32 = 0x20
    TVHKAsynchronousWorkToken *_setupRequestToken;	// 40 = 0x28
}

+ (id)new;	// IMP=0x006000000006e8e1
- (void).cxx_destruct;	// IMP=0x000000000006ec16
@property(retain, nonatomic) TVHKAsynchronousWorkToken *setupRequestToken; // @synthesize setupRequestToken=_setupRequestToken;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKFairPlaySAPContext *fairPlaySAPContext; // @synthesize fairPlaySAPContext=_fairPlaySAPContext;
- (void)executionDidBegin;	// IMP=0x000000000006eace
- (void)cancel;	// IMP=0x000000000006ea50
- (void)dealloc;	// IMP=0x000000000006ea21
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000006e97f
- (id)init;	// IMP=0x000000000006e910

@end

