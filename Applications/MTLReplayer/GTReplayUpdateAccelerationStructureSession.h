//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface GTReplayUpdateAccelerationStructureSession
{
    unsigned long long _sessionsID;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000045a3
- (void).cxx_destruct;	// IMP=0x0020000000004767
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long sessionsID; // @synthesize sessionsID=_sessionsID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004680
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000045ab

@end

