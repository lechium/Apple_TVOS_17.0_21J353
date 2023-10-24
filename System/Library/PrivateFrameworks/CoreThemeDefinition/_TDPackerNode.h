//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TDPackerNode : NSObject
{
    _Bool _used;	// 8 = 0x8
    _Bool _fit;	// 9 = 0x9
    _TDPackerNode *_down;	// 16 = 0x10
    _TDPackerNode *_right;	// 24 = 0x18
    void *_node;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
    struct CGPoint _origin;	// 56 = 0x38
}

@property(nonatomic) void *node; // @synthesize node=_node;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool fit; // @synthesize fit=_fit;
@property(retain, nonatomic) _TDPackerNode *right; // @synthesize right=_right;
@property(retain, nonatomic) _TDPackerNode *down; // @synthesize down=_down;
@property(nonatomic) _Bool used; // @synthesize used=_used;
- (void)dealloc;	// IMP=0x0000000000003057

@end

