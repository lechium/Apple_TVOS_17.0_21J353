//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet, NSString;

@interface MRDNowPlayingDataSourceApplication : NSObject
{
    _Bool _isEligible;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    NSNumber *_audioSessionID;	// 16 = 0x10
    NSSet *_mxSessionIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002e46e
@property(readonly, nonatomic) _Bool isEligible; // @synthesize isEligible=_isEligible;
@property(readonly, nonatomic) NSSet *mxSessionIDs; // @synthesize mxSessionIDs=_mxSessionIDs;
@property(readonly, nonatomic) NSNumber *audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSString *nowPlayingApplicationDisplayID;
- (id)dictionaryRepresentation;	// IMP=0x001000000002e2ba
- (id)description;	// IMP=0x001000000002e26a
- (id)initWithPID:(int)arg1 audioSessionID:(id)arg2 mxSessionIDs:(id)arg3 isEligible:(_Bool)arg4;	// IMP=0x001000000002e1be

@end
