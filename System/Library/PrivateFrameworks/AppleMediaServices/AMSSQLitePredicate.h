//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSSQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000378c29
- (unsigned long long)hash;	// IMP=0x0000000000378c0f
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x0000000000378c07
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0000000000378bff
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0000000000378bf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000378bee

@end

