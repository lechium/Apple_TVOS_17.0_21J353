//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMDFeatureProvider.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AMDStorageBasedProvider : AMDFeatureProvider
{
    NSString *_domain;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000058430
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)storeFeatureData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000058360
- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000058260
- (id)initWithDomain:(id)arg1;	// IMP=0x00000000000581b0

@end

