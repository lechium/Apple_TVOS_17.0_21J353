//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GDGraphQuery : NSObject
{
    NSString *_objectFTSTerm;	// 8 = 0x8
    NSArray *_subjects;	// 16 = 0x10
    NSArray *_predicates;	// 24 = 0x18
    NSArray *_objects;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003267be
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
@property(retain, nonatomic) NSArray *subjects; // @synthesize subjects=_subjects;
@property(retain, nonatomic) NSString *objectFTSTerm; // @synthesize objectFTSTerm=_objectFTSTerm;

@end

