//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIKBTouchState;

__attribute__((visibility("hidden")))
@interface UIKBTouchStateTask : NSObject
{
    UIKBTouchState *_touchState;	// 8 = 0x8
    CDUnknownBlockType _task;	// 16 = 0x10
    _Bool _isBusy;	// 24 = 0x18
}

+ (id)touchStateTaskForTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c12191
- (void).cxx_destruct;	// IMP=0x0000000000c1243d
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(readonly, copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
@property(readonly, nonatomic) UIKBTouchState *touchState; // @synthesize touchState=_touchState;
- (long long)compare:(id)arg1;	// IMP=0x0000000000c122fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c122ae
- (id)initWithTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c12203

@end

