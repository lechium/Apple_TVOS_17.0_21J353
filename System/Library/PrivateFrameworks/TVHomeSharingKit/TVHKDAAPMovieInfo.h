//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface TVHKDAAPMovieInfo : NSObject
{
    NSString *_studio;	// 8 = 0x8
    NSOrderedSet *_cast;	// 16 = 0x10
    NSOrderedSet *_directors;	// 24 = 0x18
    NSOrderedSet *_codirectors;	// 32 = 0x20
    NSOrderedSet *_producers;	// 40 = 0x28
    NSOrderedSet *_screenwriters;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008a940
@property(copy, nonatomic) NSOrderedSet *screenwriters; // @synthesize screenwriters=_screenwriters;
@property(copy, nonatomic) NSOrderedSet *producers; // @synthesize producers=_producers;
@property(copy, nonatomic) NSOrderedSet *codirectors; // @synthesize codirectors=_codirectors;
@property(copy, nonatomic) NSOrderedSet *directors; // @synthesize directors=_directors;
@property(copy, nonatomic) NSOrderedSet *cast; // @synthesize cast=_cast;
@property(copy, nonatomic) NSString *studio; // @synthesize studio=_studio;
- (id)description;	// IMP=0x000000000008a706
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008a27e
- (unsigned long long)hash;	// IMP=0x000000000008a0cf

@end

