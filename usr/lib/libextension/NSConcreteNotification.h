//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSNotification.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification
{
    NSString *name;	// 8 = 0x8
    id object;	// 16 = 0x10
    NSDictionary *userInfo;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000006b6f8b
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000006b6f15
- (id)userInfo;	// IMP=0x00000000006b6ef7
- (id)object;	// IMP=0x00000000006b6ee6
- (id)name;	// IMP=0x00000000006b6ec8

@end

