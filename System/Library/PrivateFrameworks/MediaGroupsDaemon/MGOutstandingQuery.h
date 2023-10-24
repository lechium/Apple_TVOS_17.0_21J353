//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate, NSUUID;

__attribute__((visibility("hidden")))
@interface MGOutstandingQuery : NSObject
{
    _Bool _requiresTopology;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001efdc
@property(readonly, nonatomic) _Bool requiresTopology; // @synthesize requiresTopology=_requiresTopology;
@property(readonly, copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000001ef28

@end

