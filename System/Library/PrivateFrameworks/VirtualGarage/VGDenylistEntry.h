//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VGDenylistEntry : NSObject
{
    NSNumber *_modelId;	// 8 = 0x8
    NSArray *_firmwareIds;	// 16 = 0x10
    NSArray *_years;	// 24 = 0x18
    NSArray *_models;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ac65
- (id)description;	// IMP=0x000000000001a127
- (_Bool)isSupersetOfEntry:(id)arg1;	// IMP=0x0000000000019fbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019dd5
- (id)initWithModelId:(id)arg1 firmwareIds:(id)arg2 years:(id)arg3 models:(id)arg4;	// IMP=0x0000000000019c86

@end
