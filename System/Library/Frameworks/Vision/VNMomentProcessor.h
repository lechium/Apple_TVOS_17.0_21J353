//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject
{
    VNMPContext *_context;	// 8 = 0x8
}

+ (id)sortImageDescriptorsChronologically:(id)arg1;	// IMP=0x00600000000a5434
- (void).cxx_destruct;	// IMP=0x00000000000a507f
@property(retain, nonatomic) VNMPContext *context; // @synthesize context=_context;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000000a4fa1
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4e52
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;	// IMP=0x00000000000a4cf9
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a4ba2
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4b8c
- (id)convertClusterNodesListToDescriptorsList:(vector_f43821d3)arg1;	// IMP=0x00000000000a4a53
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000a48b3
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a488c
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a47b5
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a46cf
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4055

@end
