//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol VNDetectorCacheDelegate;

__attribute__((visibility("hidden")))
@interface VNDetectorCache : NSObject
{
    id <VNDetectorCacheDelegate> _delegate;	// 8 = 0x8
    struct {
        unsigned int reportDidCacheDetector:1;
        unsigned int reportDidEvictDetector:1;
    } _delegateFlags;	// 16 = 0x10
    NSMutableSet *_detectors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000177c73
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x0000000000177bb8
- (id)loadedDetectors;	// IMP=0x0000000000177b58
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001778bb
- (id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001777e9
- (void)evictAllDetectors;	// IMP=0x0000000000177756
- (void)evictDetectorsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000177500
- (void)cacheDetector:(id)arg1;	// IMP=0x0000000000177436
@property(retain) id <VNDetectorCacheDelegate> delegate;
- (id)init;	// IMP=0x000000000017732b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

