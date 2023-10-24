//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBoxcarFilterPointFIFO
{
    NSMutableArray *_prevPoints;	// 16 = 0x10
    unsigned long long _width;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a0ee27
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
- (void)clear;	// IMP=0x0000000000a0ed75
- (void)flush;	// IMP=0x0000000000a0ebdd
- (void)addPoint:(struct)arg1;	// IMP=0x0000000000a0e982
- (void)emitAveragedPoint;	// IMP=0x0000000000a0e706
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;	// IMP=0x0000000000a0e673

@end

