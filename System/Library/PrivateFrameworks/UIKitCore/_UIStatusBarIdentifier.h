//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIdentifier : NSObject
{
    id _object;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
}

+ (id)uninternedIdentifierForObject:(id)arg1 string:(id)arg2;	// IMP=0x0010000000f37a5e
+ (id)identifierForObject:(id)arg1 string:(id)arg2;	// IMP=0x0010000000f3792f
+ (id)displayIdentifierFromStringRepresentation:(id)arg1;	// IMP=0x0010000000f37c83
- (void).cxx_destruct;	// IMP=0x0000000000f37c5b
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) id object; // @synthesize object=_object;
- (id)description;	// IMP=0x0000000000f37af5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f37aea
@property(readonly, copy, nonatomic) NSString *stringRepresentation;

@end

