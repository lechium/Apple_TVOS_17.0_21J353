//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDRemoteHomeMessageDestination
{
    NSUUID *_homeUUID;	// 8 = 0x8
    NSNumber *_queueTimeout;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x006000000085f641
- (void).cxx_destruct;	// IMP=0x000000000085f610
@property(readonly, nonatomic) NSNumber *queueTimeout; // @synthesize queueTimeout=_queueTimeout;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)privateDescription;	// IMP=0x000000000085f5da
- (id)description;	// IMP=0x000000000085f5c6
- (id)debugDescription;	// IMP=0x000000000085f5af
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000085f420
- (id)shortDescription;	// IMP=0x000000000085f35e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000085f1a3
- (unsigned long long)hash;	// IMP=0x000000000085f0ed
- (id)initWithTarget:(id)arg1 homeUUID:(id)arg2 queueTimeout:(id)arg3;	// IMP=0x000000000085f045
- (id)initWithTarget:(id)arg1 homeUUID:(id)arg2;	// IMP=0x000000000085f030
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000085ef7c

@end

