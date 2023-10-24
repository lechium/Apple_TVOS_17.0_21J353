//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceAddress : NSObject
{
    NSUUID *_idsIdentifier;	// 8 = 0x8
    NSString *_idsDestination;	// 16 = 0x10
}

+ (id)localDeviceIDSIdentifier;	// IMP=0x00100000005d5765
+ (id)addressWithIDSIdentifier:(id)arg1 idsDestination:(id)arg2;	// IMP=0x00100000005d56ed
- (void).cxx_destruct;	// IMP=0x00000000005d56c5
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) NSUUID *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005d56a6
@property(readonly, getter=isCurrentDevice) _Bool currentDevice;
- (id)description;	// IMP=0x00000000005d5587
- (unsigned long long)hash;	// IMP=0x00000000005d5543
- (_Bool)isEquivalentToDeviceAddress:(id)arg1;	// IMP=0x00000000005d53e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005d528f
- (id)initWithIDSIdentifier:(id)arg1 idsDestination:(id)arg2;	// IMP=0x00000000005d51d4

@end
