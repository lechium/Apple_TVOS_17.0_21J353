//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GTMTLReplayService, OS_dispatch_semaphore;

@interface GTReplayRequestToken : NSObject
{
    NSObject<OS_dispatch_semaphore> *_finished;	// 8 = 0x8
    id <GTMTLReplayService> _replayer;	// 16 = 0x10
    unsigned long long _tokenId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000719a
@property(readonly, nonatomic) unsigned long long tokenId; // @synthesize tokenId=_tokenId;
- (_Bool)resume;	// IMP=0x0010000000007173
- (_Bool)pause;	// IMP=0x0010000000007156
- (_Bool)cancel;	// IMP=0x0010000000007139
- (void)waitUntilCompleted;	// IMP=0x0010000000007124
- (void)completed;	// IMP=0x0010000000007116
- (id)initWithService:(id)arg1 andTokenId:(unsigned long long)arg2;	// IMP=0x0010000000007078

@end
