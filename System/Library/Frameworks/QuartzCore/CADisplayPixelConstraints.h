//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPixelConstraints : NSObject
{
    float *_nits;	// 8 = 0x8
    float *_apl;	// 16 = 0x10
    unsigned long long _n;	// 24 = 0x18
    float _weights[3];	// 32 = 0x20
}

@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0000000000208e02
@property(readonly, nonatomic) const float *rgbWeights;
@property(readonly, nonatomic) unsigned long long tableSize;
@property(readonly, nonatomic) const float *averagePixelTable;
@property(readonly, nonatomic) const float *nitsTable;
- (id)initWithConstraints:(const struct AveragePixelConstraints *)arg1;	// IMP=0x0000000000208cfd

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

