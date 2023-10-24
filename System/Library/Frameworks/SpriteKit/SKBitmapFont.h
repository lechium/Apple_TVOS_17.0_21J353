//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKBitmapFont : NSObject
{
    NSString *_fontName;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
    double _lineHeight;	// 24 = 0x18
    double _baseLine;	// 32 = 0x20
    NSArray *_characterSprites;	// 40 = 0x28
    struct map<unsigned short, SKSpriteNode *, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, SKSpriteNode *>>> _characterSpriteByChar;	// 48 = 0x30
    struct map<unsigned short, double, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> _characterAdvanceByChar;	// 72 = 0x48
    struct map<unsigned int, double, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, double>>> _characterKerningByCharPair;	// 96 = 0x60
    _Bool _internal;	// 120 = 0x78
    NSString *_fileName;	// 128 = 0x80
}

+ (id)fontWithTexture:(id)arg1 fontDataString:(id)arg2;	// IMP=0x001000000002bcca
+ (id)fontForFileNamed:(id)arg1;	// IMP=0x001000000002ba40
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000029cf9
+ (id)_fontForFileNamed:(id)arg1;	// IMP=0x001000000002be12
- (id).cxx_construct;	// IMP=0x000000000002bde2
- (void).cxx_destruct;	// IMP=0x000000000002bd7a
- (double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2;	// IMP=0x000000000002bc91
- (double)advanceForCharacterNamed:(unsigned short)arg1;	// IMP=0x000000000002bc5c
- (double)lineHeight;	// IMP=0x000000000002bc51
- (id)spriteForCharacterNamed:(unsigned short)arg1;	// IMP=0x000000000002bc09
- (_Bool)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2;	// IMP=0x000000000002a2a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a283
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029f30
- (id)init;	// IMP=0x0000000000029d01
- (id)fontName;	// IMP=0x0000000000029ce8

@end

