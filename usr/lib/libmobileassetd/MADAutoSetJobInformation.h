//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoSetDescriptor, MANAutoAssetSetInfoDesire, MANAutoAssetSetInfoFound, MANAutoAssetSetInfoInstance, MANAutoAssetSetStatus;

__attribute__((visibility("hidden")))
@interface MADAutoSetJobInformation : NSObject
{
    MANAutoAssetSetInfoInstance *_clientInstance;	// 8 = 0x8
    MANAutoAssetSetInfoDesire *_clientDesire;	// 16 = 0x10
    MANAutoAssetSetInfoFound *_foundContent;	// 24 = 0x18
    MADAutoSetDescriptor *_setDescriptor;	// 32 = 0x20
    MANAutoAssetSetStatus *_currentSetStatus;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000077345
- (void).cxx_destruct;	// IMP=0x000000000007770f
@property(retain, nonatomic) MANAutoAssetSetStatus *currentSetStatus; // @synthesize currentSetStatus=_currentSetStatus;
@property(retain, nonatomic) MADAutoSetDescriptor *setDescriptor; // @synthesize setDescriptor=_setDescriptor;
@property(retain, nonatomic) MANAutoAssetSetInfoFound *foundContent; // @synthesize foundContent=_foundContent;
@property(retain, nonatomic) MANAutoAssetSetInfoDesire *clientDesire; // @synthesize clientDesire=_clientDesire;
@property(retain, nonatomic) MANAutoAssetSetInfoInstance *clientInstance; // @synthesize clientInstance=_clientInstance;
- (id)summary;	// IMP=0x00000000000774c0
- (id)description;	// IMP=0x00000000000774ae
- (id)copy;	// IMP=0x000000000007734d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000771f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077085
- (id)init;	// IMP=0x0000000000077000

@end

