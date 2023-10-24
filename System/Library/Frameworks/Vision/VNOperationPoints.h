//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNOperationPoints : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012f1a7
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012f16d
+ (id)unspecifiedOperationPoints;	// IMP=0x001000000012f154
+ (id)errorForUnknownClassificationIdentifier:(id)arg1;	// IMP=0x001000000012f0ea
+ (id)errorForUnimplementedMethod:(SEL)arg1;	// IMP=0x001000000012f033
+ (id)operationPointsForMLModel:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001674c1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012efb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012ef43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012ef38
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x000000000012eef4
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;	// IMP=0x000000000012eeb0
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x000000000012ee6c
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;	// IMP=0x000000000012ee28
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012ede4
- (_Bool)getClassificationMetrics:(id *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012ed69

@end

