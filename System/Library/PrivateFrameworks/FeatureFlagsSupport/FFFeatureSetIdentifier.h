//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FFFeatureSetIdentifier : NSObject
{
    NSString *_featureGroupName;	// 8 = 0x8
    NSString *_featureSetName;	// 16 = 0x10
}

+ (id)identifierFromString:(id)arg1;	// IMP=0x0010000000002750
- (void).cxx_destruct;	// IMP=0x0000000000002a3b
@property(readonly, nonatomic) NSString *featureSetName; // @synthesize featureSetName=_featureSetName;
@property(readonly, nonatomic) NSString *featureGroupName; // @synthesize featureGroupName=_featureGroupName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000029ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000028f6
- (unsigned long long)hash;	// IMP=0x00000000000028b7
- (id)initWithGroup:(id)arg1 set:(id)arg2;	// IMP=0x00000000000026b7

@end

