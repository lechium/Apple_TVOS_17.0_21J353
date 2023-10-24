//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKRentalItem;

__attribute__((visibility("hidden")))
@interface TVHKRentalOperation : TVHKAsynchronousOperation
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKRentalItem *_rentalItem;	// 24 = 0x18
    TVHKMediaLibrarySessionState *_sessionState;	// 32 = 0x20
    TVHKMediaLibraryRequestSession *_requestSession;	// 40 = 0x28
}

+ (id)new;	// IMP=0x006000000001c087
- (void).cxx_destruct;	// IMP=0x000000000001c426
@property(readonly, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(readonly, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) TVHKRentalItem *rentalItem; // @synthesize rentalItem=_rentalItem;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (id)initWithMediaItem:(id)arg1 sessionState:(id)arg2 requestSession:(id)arg3;	// IMP=0x000000000001c125
- (id)init;	// IMP=0x000000000001c0b6

@end

