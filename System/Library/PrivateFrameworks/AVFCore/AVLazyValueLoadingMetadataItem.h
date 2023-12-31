//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMetadataItem.h"

@class AVLazyValueLoadingMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItem : AVMetadataItem
{
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;	// 16 = 0x10
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000001d37e
- (id)dataType;	// IMP=0x000000000001ded6
- (id)value;	// IMP=0x000000000001dea3
- (void)_waitForLoadingOfValueDependentKey:(id)arg1;	// IMP=0x000000000001dde3
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001dae2
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001da86
- (long long)_valueStatus;	// IMP=0x000000000001d9b4
- (_Bool)_valueForKeyDependsOnMetadataValue:(id)arg1;	// IMP=0x000000000001d915
- (void)_valueRequestDidFinish;	// IMP=0x000000000001d593
- (void)dealloc;	// IMP=0x000000000001d4dd
- (id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d3d5

@end

