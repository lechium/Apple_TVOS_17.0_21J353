//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOGloriaTessellationOptions : PBCodable
{
    CDStruct_9f2792e4 _zoomLevels;	// 8 = 0x8
    int _type;	// 32 = 0x20
}

- (unsigned long long)hash;	// IMP=0x00000000011a97e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011a9752
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011a96e4
- (void)writeTo:(id)arg1;	// IMP=0x00000000011a9671
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011a9331
- (id)jsonRepresentation;	// IMP=0x00000000011a9327
- (id)dictionaryRepresentation;	// IMP=0x00000000011a9223
- (id)description;	// IMP=0x00000000011a9174
- (void)dealloc;	// IMP=0x00000000011a9058

@end

