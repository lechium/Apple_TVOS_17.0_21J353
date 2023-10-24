//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLBuiltInMeshArgument
{
    unsigned short _builtInType;	// 64 = 0x40
    unsigned short _builtInDataType;	// 66 = 0x42
    unsigned short _meshVertexCount;	// 68 = 0x44
    unsigned short _meshPrimitiveCount;	// 70 = 0x46
    unsigned short _meshTopologyType;	// 72 = 0x48
    MTLStructTypeInternal *_meshVertexStruct;	// 80 = 0x50
    MTLStructTypeInternal *_meshPrimitiveStruct;	// 88 = 0x58
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007552f
- (id)meshPrimitiveStruct;	// IMP=0x000000000007551e
- (id)meshVertexStruct;	// IMP=0x000000000007550d
- (unsigned long long)meshTopologyType;	// IMP=0x00000000000754fc
- (unsigned long long)meshPrimitiveCount;	// IMP=0x00000000000754eb
- (unsigned long long)meshVertexCount;	// IMP=0x00000000000754da
- (void)dealloc;	// IMP=0x000000000007546f
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000075101
- (unsigned long long)builtInType;	// IMP=0x00000000000750f0
- (unsigned long long)builtInDataType;	// IMP=0x00000000000750df
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(_Bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7 meshVertexStructType:(id)arg8 meshPrimitiveStructType:(id)arg9 meshVertexCount:(unsigned short)arg10 meshPrimitiveCount:(unsigned short)arg11 meshTopologyType:(unsigned long long)arg12;	// IMP=0x0000000000075007

@end

