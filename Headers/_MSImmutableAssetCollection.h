//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelBase.h"

@class MSImmutableArray, MSImmutableImageCollection, MSImmutableImageCollection<MSImageCollection>;

@interface _MSImmutableAssetCollection : MSImmutableModelBase
{
    MSImmutableArray *_colors;
    MSImmutableArray *_gradients;
    MSImmutableArray *_images;
    MSImmutableImageCollection *_imageCollection;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableImageCollection<MSImageCollection> *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) MSImmutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) MSImmutableArray *gradients; // @synthesize gradients=_gradients;
@property(retain, nonatomic) MSImmutableArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (BOOL)attributesEqualAttributesForObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)imageCollectionGeneric;
- (id)imagesGeneric;
- (id)gradientsGeneric;
- (id)colorsGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

