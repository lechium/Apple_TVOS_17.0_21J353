//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject
{
    CDUnknownBlockType __task;	// 8 = 0x8
    NSArray *__creationStack;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c25ab7
@property(readonly, retain, nonatomic) NSArray *originatingStack; // @synthesize originatingStack=__creationStack;
- (void)execute:(id)arg1;	// IMP=0x0000000000c25a9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c25a5b
- (id)initWithTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c25998

@end

