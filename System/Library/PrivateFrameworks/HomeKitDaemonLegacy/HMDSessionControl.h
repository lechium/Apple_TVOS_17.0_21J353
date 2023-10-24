//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSessionControl : HAPTLVBase
{
    unsigned long long _controlCommand;	// 8 = 0x8
    NSUUID *_sessionID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000073b3c
- (void).cxx_destruct;	// IMP=0x0000000000073b29
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) unsigned long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073a74
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007392a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000737c0
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000073565
- (id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00000000000734e5

@end
