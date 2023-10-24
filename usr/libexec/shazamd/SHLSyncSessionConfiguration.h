//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface SHLSyncSessionConfiguration : NSObject
{
    long long _sessionType;	// 8 = 0x8
    long long _sessionScope;	// 16 = 0x10
    NSString *_callingProcessIdentifier;	// 24 = 0x18
    NSUUID *_sessionIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000146be
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *callingProcessIdentifier; // @synthesize callingProcessIdentifier=_callingProcessIdentifier;
@property(readonly, nonatomic) long long sessionScope; // @synthesize sessionScope=_sessionScope;
@property(readonly, nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
- (id)initWithType:(long long)arg1 scope:(long long)arg2 callingProcessIdentifier:(id)arg3 sessionIdentifier:(id)arg4;	// IMP=0x00100000000145e8

@end

