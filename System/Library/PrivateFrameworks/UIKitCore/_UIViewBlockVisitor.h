//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIViewBlockVisitor
{
    CDUnknownBlockType _visitorBlock;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType visitorBlock; // @synthesize visitorBlock=_visitorBlock;
- (_Bool)_visitView:(id)arg1;	// IMP=0x000000000143a6e8
- (void)dealloc;	// IMP=0x000000000143a6a1
- (id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000143a64b

@end

