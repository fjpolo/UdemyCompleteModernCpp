/**
 * Includes
 */ 
#include <iostream>
#include <string>

/**
 * \class Stream
 * 
 * \brief
 */ 
class Stream{
    private:
        std::string m_FileName;

    public:
        Stream(const std::string &filename):m_FileName(filename){
            std::cout << "Stream(const std::string &filename)" << std::endl;
        }
        ~Stream(){
            std::cout << "~Stream()" << std::endl;
        }
        const std::string &GetFileName()const{
            return m_FileName;
        }
        
};

/**
 * \class OutputStream
 * 
 * \brief
 */ 
class OutputStream : virtual public Stream{
    private:
        std::ostream &out;

    public:
        OutputStream(std::ostream &o, const std::string &filename):out(o), Stream(filename){
            std::cout << "OutputStream(std::ostream &o, const std::string &filename)" << std::endl;
        }
        ~OutputStream(){
            std::cout << "~OutputStream()" << std::endl;
        }
        std::ostream & operator <<(const std::string &data){
            out << data;
            return out;
        }
};

/**
 * \class InputStream
 * 
 * \brief
 */ 
class InputStream : virtual public Stream{
    private:
        std::istream &in;

    public:
        InputStream(std::istream &i, const std::string &filename):in(i), Stream(filename){
            std::cout << "InputStream(std::ostream &o, const std::string &filename)" << std::endl;
        }
        ~InputStream(){
            std::cout << "~InputStream()" << std::endl;
        }
        std::istream & operator >>(const std::string &data){
            in >> data;
            return in;
        }
};


/**
 * \class IOStream
 * 
 * \brief
 */ 
class IOStream : public OutputStream, public InputStream{
    private:

    public:
        IOStream(const std::string &filename)
        :OutputStream(std::cout, filename),
        InputStream(std::cin, filename),
        Stream(filename)
        {
            std::cout << "IOStream(const std::string &filename)" << std::endl;
        }
        ~IOStream(){
            std::cout << "~IOStream()" << std::endl;
        }
};


/**
 * \fn main
 * 
 * \brief
 */
int main(){
    IOStream streamy("doc.txt");
    std::string data;
    streamy >> data;
    streamy << data;
    streamy >> stream.GetFileName() << std::endl;

    return 0;
}
 
