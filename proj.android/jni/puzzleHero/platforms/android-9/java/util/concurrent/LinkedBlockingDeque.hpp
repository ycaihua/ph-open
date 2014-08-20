/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.LinkedBlockingDeque
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Queue; } } }
namespace j2cpp { namespace java { namespace util { class AbstractQueue; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingDeque; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingQueue; } } } }
namespace j2cpp { namespace java { namespace util { class Deque; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractQueue.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Deque.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Queue.hpp>
#include <java/util/concurrent/BlockingDeque.hpp>
#include <java/util/concurrent/BlockingQueue.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class LinkedBlockingDeque;
	class LinkedBlockingDeque
		: public object<LinkedBlockingDeque>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)

		explicit LinkedBlockingDeque(jobject jobj)
		: object<LinkedBlockingDeque>(jobj)
		{
		}

		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Queue>() const;
		operator local_ref<java::util::AbstractQueue>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::concurrent::BlockingDeque>() const;
		operator local_ref<java::util::concurrent::BlockingQueue>() const;
		operator local_ref<java::util::Deque>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::io::Serializable>() const;


		LinkedBlockingDeque();
		LinkedBlockingDeque(jint);
		LinkedBlockingDeque(local_ref< java::util::Collection > const&);
		void addFirst(local_ref< java::lang::Object >  const&);
		void addLast(local_ref< java::lang::Object >  const&);
		jboolean offerFirst(local_ref< java::lang::Object >  const&);
		jboolean offerLast(local_ref< java::lang::Object >  const&);
		void putFirst(local_ref< java::lang::Object >  const&);
		void putLast(local_ref< java::lang::Object >  const&);
		jboolean offerFirst(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		jboolean offerLast(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > removeFirst();
		local_ref< java::lang::Object > removeLast();
		local_ref< java::lang::Object > pollFirst();
		local_ref< java::lang::Object > pollLast();
		local_ref< java::lang::Object > takeFirst();
		local_ref< java::lang::Object > takeLast();
		local_ref< java::lang::Object > pollFirst(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > pollLast(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > getFirst();
		local_ref< java::lang::Object > getLast();
		local_ref< java::lang::Object > peekFirst();
		local_ref< java::lang::Object > peekLast();
		jboolean removeFirstOccurrence(local_ref< java::lang::Object >  const&);
		jboolean removeLastOccurrence(local_ref< java::lang::Object >  const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&);
		void put(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > remove();
		local_ref< java::lang::Object > poll();
		local_ref< java::lang::Object > take();
		local_ref< java::lang::Object > poll(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > element();
		local_ref< java::lang::Object > peek();
		jint remainingCapacity();
		jint drainTo(local_ref< java::util::Collection >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&, jint);
		void push(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > pop();
		jboolean remove(local_ref< java::lang::Object >  const&);
		jint size();
		jboolean contains(local_ref< java::lang::Object >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > toString();
		void clear();
		local_ref< java::util::Iterator > iterator();
		local_ref< java::util::Iterator > descendingIterator();
	}; //class LinkedBlockingDeque

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::Queue>() const
{
	return local_ref<java::util::Queue>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::AbstractQueue>() const
{
	return local_ref<java::util::AbstractQueue>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::concurrent::BlockingDeque>() const
{
	return local_ref<java::util::concurrent::BlockingDeque>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::concurrent::BlockingQueue>() const
{
	return local_ref<java::util::concurrent::BlockingQueue>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::Deque>() const
{
	return local_ref<java::util::Deque>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::concurrent::LinkedBlockingDeque::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::LinkedBlockingDeque::LinkedBlockingDeque()
: object<java::util::concurrent::LinkedBlockingDeque>(
	call_new_object<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(0),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::concurrent::LinkedBlockingDeque::LinkedBlockingDeque(jint a0)
: object<java::util::concurrent::LinkedBlockingDeque>(
	call_new_object<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(1),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::concurrent::LinkedBlockingDeque::LinkedBlockingDeque(local_ref< java::util::Collection > const &a0)
: object<java::util::concurrent::LinkedBlockingDeque>(
	call_new_object<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(2),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


void java::util::concurrent::LinkedBlockingDeque::addFirst(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(3),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void java::util::concurrent::LinkedBlockingDeque::addLast(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(4),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::offerFirst(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(5),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::offerLast(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(6),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::concurrent::LinkedBlockingDeque::putFirst(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(7),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::util::concurrent::LinkedBlockingDeque::putLast(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(8),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::offerFirst(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(9),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean java::util::concurrent::LinkedBlockingDeque::offerLast(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(10),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::removeFirst()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(11),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::removeLast()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(12),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollFirst()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(13),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollLast()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(14),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::takeFirst()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(15),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::takeLast()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(16),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollFirst(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(17),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollLast(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(18),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::getFirst()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(19),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::getLast()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(20),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::peekFirst()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(21),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::peekLast()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(22),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::concurrent::LinkedBlockingDeque::removeFirstOccurrence(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(23),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::removeLastOccurrence(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(24),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(25),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::offer(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(26),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::concurrent::LinkedBlockingDeque::put(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(27),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingDeque::offer(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(28),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::remove()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(29),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::poll()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(30),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::take()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(31),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::poll(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(32),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::element()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(33),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::peek()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(34),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jint java::util::concurrent::LinkedBlockingDeque::remainingCapacity()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(35),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(35), 
		jint
	>(get_jobject());
}

jint java::util::concurrent::LinkedBlockingDeque::drainTo(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(36),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(36), 
		jint
	>(get_jobject(), a0);
}

jint java::util::concurrent::LinkedBlockingDeque::drainTo(local_ref< java::util::Collection > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(37),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(37), 
		jint
	>(get_jobject(), a0, a1);
}

void java::util::concurrent::LinkedBlockingDeque::push(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(38),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pop()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(39),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::concurrent::LinkedBlockingDeque::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(40),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(40), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::concurrent::LinkedBlockingDeque::size()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(41),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(41), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::LinkedBlockingDeque::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(42),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(42), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::LinkedBlockingDeque::toArray()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(43),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::LinkedBlockingDeque::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(44),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(44), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::LinkedBlockingDeque::toString()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(45),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::util::concurrent::LinkedBlockingDeque::clear()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(46),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(46), 
		void
	>(get_jobject());
}

local_ref< java::util::Iterator > java::util::concurrent::LinkedBlockingDeque::iterator()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(47),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

local_ref< java::util::Iterator > java::util::concurrent::LinkedBlockingDeque::descendingIterator()
{
	return call_method<
		java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(48),
		java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::LinkedBlockingDeque,"java/util/concurrent/LinkedBlockingDeque")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,2,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,3,"addFirst","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,4,"addLast","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,5,"offerFirst","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,6,"offerLast","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,7,"putFirst","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,8,"putLast","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,9,"offerFirst","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,10,"offerLast","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,11,"removeFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,12,"removeLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,13,"pollFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,14,"pollLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,15,"takeFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,16,"takeLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,17,"pollFirst","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,18,"pollLast","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,19,"getFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,20,"getLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,21,"peekFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,22,"peekLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,23,"removeFirstOccurrence","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,24,"removeLastOccurrence","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,25,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,26,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,27,"put","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,28,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,29,"remove","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,30,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,31,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,32,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,33,"element","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,34,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,35,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,36,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,37,"drainTo","(Ljava/util/Collection;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,38,"push","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,39,"pop","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,40,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,41,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,42,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,43,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,44,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,45,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,46,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,47,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,48,"descendingIterator","()Ljava/util/Iterator;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION