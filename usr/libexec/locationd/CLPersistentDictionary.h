//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CLPersistentDictionary : NSObject
{
    _Bool _modified;	// 8 = 0x8
    int _dataProtection;	// 12 = 0xc
    NSString *_filename;	// 16 = 0x10
    NSMutableDictionary *_underlyingDictionary;	// 24 = 0x18
}

+ (id)persistentDictionaryWithFilename:(id)arg1 withDataProtectionClass:(int)arg2;	// IMP=0x004000000059cf80
@property(retain, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
@property(readonly, nonatomic) int dataProtection; // @synthesize dataProtection=_dataProtection;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void)markModifiedClean;	// IMP=0x001000000059da27
- (void)markModifiedDirty;	// IMP=0x001000000059da1d
- (_Bool)isModified;	// IMP=0x001000000059da14
- (void)clear;	// IMP=0x001000000059d9b4
- (void)refresh;	// IMP=0x001000000059d585
- (void)persist;	// IMP=0x001000000059d13b
- (void)setDictionary:(id)arg1;	// IMP=0x001000000059d0be
- (id)dictionary;	// IMP=0x001000000059d08e
- (void)dealloc;	// IMP=0x001000000059d041
- (id)initWithFilename:(id)arg1 withDataProtectionClass:(int)arg2;	// IMP=0x001000000059cfb2

@end
