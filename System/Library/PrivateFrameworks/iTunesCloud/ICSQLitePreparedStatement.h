//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICSQLitePreparedStatement : NSObject
{
    const void *_connectionPointer;	// 8 = 0x8
    NSString *_SQL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014cb44
@property(readonly, copy, nonatomic) NSString *SQL; // @synthesize SQL=_SQL;
@property(readonly, nonatomic) const void *connectionPointer; // @synthesize connectionPointer=_connectionPointer;
- (id)initWithConnection:(const void *)arg1 SQL:(id)arg2;	// IMP=0x000000000014cab2

@end

